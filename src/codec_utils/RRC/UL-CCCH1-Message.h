/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_UL_CCCH1_Message_H_
#define	_UL_CCCH1_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-CCCH1-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-CCCH1-Message */
typedef struct UL_CCCH1_Message {
	UL_CCCH1_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCCH1_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCCH1_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_CCCH1_Message_H_ */
#include <asn_internal.h>
