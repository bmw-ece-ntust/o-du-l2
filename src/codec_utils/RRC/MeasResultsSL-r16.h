/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MeasResultsSL_r16_H_
#define	_MeasResultsSL_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResultsSL_r16__measResultsListSL_r16_PR {
	MeasResultsSL_r16__measResultsListSL_r16_PR_NOTHING,	/* No components present */
	MeasResultsSL_r16__measResultsListSL_r16_PR_measResultNR_SL_r16
	/* Extensions may appear below */
	
} MeasResultsSL_r16__measResultsListSL_r16_PR;

/* Forward declarations */
struct MeasResultNR_SL_r16;

/* MeasResultsSL-r16 */
typedef struct MeasResultsSL_r16 {
	struct MeasResultsSL_r16__measResultsListSL_r16 {
		MeasResultsSL_r16__measResultsListSL_r16_PR present;
		union MeasResultsSL_r16__measResultsListSL_r16_u {
			struct MeasResultNR_SL_r16	*measResultNR_SL_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultsListSL_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultsSL_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultsSL_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultsSL_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultsSL_r16_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultNR-SL-r16.h"

#endif	/* _MeasResultsSL_r16_H_ */
#include <asn_internal.h>
