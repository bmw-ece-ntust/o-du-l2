/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_ConditionalReconfiguration_r16_H_
#define	_ConditionalReconfiguration_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ConditionalReconfiguration_r16__attemptCondReconfig_r16 {
	ConditionalReconfiguration_r16__attemptCondReconfig_r16_true	= 0
} e_ConditionalReconfiguration_r16__attemptCondReconfig_r16;

/* Forward declarations */
struct CondReconfigToRemoveList_r16;
struct CondReconfigToAddModList_r16;

/* ConditionalReconfiguration-r16 */
typedef struct ConditionalReconfiguration_r16 {
	long	*attemptCondReconfig_r16;	/* OPTIONAL */
	struct CondReconfigToRemoveList_r16	*condReconfigToRemoveList_r16;	/* OPTIONAL */
	struct CondReconfigToAddModList_r16	*condReconfigToAddModList_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConditionalReconfiguration_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_attemptCondReconfig_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ConditionalReconfiguration_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_ConditionalReconfiguration_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_ConditionalReconfiguration_r16_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CondReconfigToRemoveList-r16.h"
#include "CondReconfigToAddModList-r16.h"

#endif	/* _ConditionalReconfiguration_r16_H_ */
#include <asn_internal.h>
