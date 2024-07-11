/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_InitialUE_Identity_H_
#define	_InitialUE_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitialUE_Identity_PR {
	InitialUE_Identity_PR_NOTHING,	/* No components present */
	InitialUE_Identity_PR_ng_5G_S_TMSI_Part1,
	InitialUE_Identity_PR_randomValue
} InitialUE_Identity_PR;

/* InitialUE-Identity */
typedef struct InitialUE_Identity {
	InitialUE_Identity_PR present;
	union InitialUE_Identity_u {
		BIT_STRING_t	 ng_5G_S_TMSI_Part1;
		BIT_STRING_t	 randomValue;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialUE_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialUE_Identity;
extern asn_CHOICE_specifics_t asn_SPC_InitialUE_Identity_specs_1;
extern asn_TYPE_member_t asn_MBR_InitialUE_Identity_1[2];
extern asn_per_constraints_t asn_PER_type_InitialUE_Identity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _InitialUE_Identity_H_ */
#include <asn_internal.h>
