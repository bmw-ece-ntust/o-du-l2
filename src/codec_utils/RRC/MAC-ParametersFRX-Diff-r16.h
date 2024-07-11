/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MAC_ParametersFRX_Diff_r16_H_
#define	_MAC_ParametersFRX_Diff_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_ParametersFRX_Diff_r16__directMCG_SCellActivation_r16 {
	MAC_ParametersFRX_Diff_r16__directMCG_SCellActivation_r16_supported	= 0
} e_MAC_ParametersFRX_Diff_r16__directMCG_SCellActivation_r16;
typedef enum MAC_ParametersFRX_Diff_r16__directMCG_SCellActivationResume_r16 {
	MAC_ParametersFRX_Diff_r16__directMCG_SCellActivationResume_r16_supported	= 0
} e_MAC_ParametersFRX_Diff_r16__directMCG_SCellActivationResume_r16;
typedef enum MAC_ParametersFRX_Diff_r16__directSCG_SCellActivation_r16 {
	MAC_ParametersFRX_Diff_r16__directSCG_SCellActivation_r16_supported	= 0
} e_MAC_ParametersFRX_Diff_r16__directSCG_SCellActivation_r16;
typedef enum MAC_ParametersFRX_Diff_r16__directSCG_SCellActivationResume_r16 {
	MAC_ParametersFRX_Diff_r16__directSCG_SCellActivationResume_r16_supported	= 0
} e_MAC_ParametersFRX_Diff_r16__directSCG_SCellActivationResume_r16;

/* Forward declarations */
struct MinTimeGap_r16;

/* MAC-ParametersFRX-Diff-r16 */
typedef struct MAC_ParametersFRX_Diff_r16 {
	long	*directMCG_SCellActivation_r16;	/* OPTIONAL */
	long	*directMCG_SCellActivationResume_r16;	/* OPTIONAL */
	long	*directSCG_SCellActivation_r16;	/* OPTIONAL */
	long	*directSCG_SCellActivationResume_r16;	/* OPTIONAL */
	struct MAC_ParametersFRX_Diff_r16__drx_Adaptation_r16 {
		struct MinTimeGap_r16	*non_SharedSpectrumChAccess_r16;	/* OPTIONAL */
		struct MinTimeGap_r16	*sharedSpectrumChAccess_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *drx_Adaptation_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ParametersFRX_Diff_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_directMCG_SCellActivation_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_directMCG_SCellActivationResume_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_directSCG_SCellActivation_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_directSCG_SCellActivationResume_r16_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ParametersFRX_Diff_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_ParametersFRX_Diff_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_ParametersFRX_Diff_r16_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MinTimeGap-r16.h"

#endif	/* _MAC_ParametersFRX_Diff_r16_H_ */
#include <asn_internal.h>
