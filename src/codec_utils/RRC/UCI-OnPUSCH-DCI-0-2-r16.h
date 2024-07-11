/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_UCI_OnPUSCH_DCI_0_2_r16_H_
#define	_UCI_OnPUSCH_DCI_0_2_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16_PR {
	UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16_PR_NOTHING,	/* No components present */
	UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16_PR_dynamicDCI_0_2_r16,
	UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16_PR_semiStaticDCI_0_2_r16
} UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16_PR;
typedef enum UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16_PR {
	UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16_PR_NOTHING,	/* No components present */
	UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16_PR_oneBit_r16,
	UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16_PR_twoBits_r16
} UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16_PR;
typedef enum UCI_OnPUSCH_DCI_0_2_r16__scalingDCI_0_2_r16 {
	UCI_OnPUSCH_DCI_0_2_r16__scalingDCI_0_2_r16_f0p5	= 0,
	UCI_OnPUSCH_DCI_0_2_r16__scalingDCI_0_2_r16_f0p65	= 1,
	UCI_OnPUSCH_DCI_0_2_r16__scalingDCI_0_2_r16_f0p8	= 2,
	UCI_OnPUSCH_DCI_0_2_r16__scalingDCI_0_2_r16_f1	= 3
} e_UCI_OnPUSCH_DCI_0_2_r16__scalingDCI_0_2_r16;

/* Forward declarations */
struct BetaOffsets;

/* UCI-OnPUSCH-DCI-0-2-r16 */
typedef struct UCI_OnPUSCH_DCI_0_2_r16 {
	struct UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16 {
		UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16_PR present;
		union UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16_u {
			struct UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16 {
				UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16_PR present;
				union UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16_u {
					struct UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16__oneBit_r16 {
						A_SEQUENCE_OF(struct BetaOffsets) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *oneBit_r16;
					struct UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16__twoBits_r16 {
						A_SEQUENCE_OF(struct BetaOffsets) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *twoBits_r16;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *dynamicDCI_0_2_r16;
			struct BetaOffsets	*semiStaticDCI_0_2_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *betaOffsetsDCI_0_2_r16;
	long	 scalingDCI_0_2_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UCI_OnPUSCH_DCI_0_2_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_scalingDCI_0_2_r16_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UCI_OnPUSCH_DCI_0_2_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_UCI_OnPUSCH_DCI_0_2_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_UCI_OnPUSCH_DCI_0_2_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BetaOffsets.h"

#endif	/* _UCI_OnPUSCH_DCI_0_2_r16_H_ */
#include <asn_internal.h>
