/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_IMS_ParametersFRX_Diff_H_
#define	_IMS_ParametersFRX_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IMS_ParametersFRX_Diff__voiceOverNR {
	IMS_ParametersFRX_Diff__voiceOverNR_supported	= 0
} e_IMS_ParametersFRX_Diff__voiceOverNR;

/* IMS-ParametersFRX-Diff */
typedef struct IMS_ParametersFRX_Diff {
	long	*voiceOverNR;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IMS_ParametersFRX_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceOverNR_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IMS_ParametersFRX_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_IMS_ParametersFRX_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_IMS_ParametersFRX_Diff_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IMS_ParametersFRX_Diff_H_ */
#include <asn_internal.h>
