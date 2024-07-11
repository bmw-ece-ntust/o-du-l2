/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_PerRAAttemptInfo_r16_H_
#define	_PerRAAttemptInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PerRAAttemptInfo_r16__ext1__fallbackToFourStepRA_r17 {
	PerRAAttemptInfo_r16__ext1__fallbackToFourStepRA_r17_true	= 0
} e_PerRAAttemptInfo_r16__ext1__fallbackToFourStepRA_r17;

/* PerRAAttemptInfo-r16 */
typedef struct PerRAAttemptInfo_r16 {
	BOOLEAN_t	*contentionDetected_r16;	/* OPTIONAL */
	BOOLEAN_t	*dlRSRPAboveThreshold_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PerRAAttemptInfo_r16__ext1 {
		long	*fallbackToFourStepRA_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PerRAAttemptInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fallbackToFourStepRA_r17_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PerRAAttemptInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_PerRAAttemptInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PerRAAttemptInfo_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PerRAAttemptInfo_r16_H_ */
#include <asn_internal.h>
