/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BandCombination_v1630_H_
#define	_BandCombination_v1630_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "ScalingFactorSidelink-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CA_ParametersNR_v1630;
struct CA_ParametersNRDC_v1630;
struct MRDC_Parameters_v1630;

/* BandCombination-v1630 */
typedef struct BandCombination_v1630 {
	struct CA_ParametersNR_v1630	*ca_ParametersNR_v1630;	/* OPTIONAL */
	struct CA_ParametersNRDC_v1630	*ca_ParametersNRDC_v1630;	/* OPTIONAL */
	struct MRDC_Parameters_v1630	*mrdc_Parameters_v1630;	/* OPTIONAL */
	BIT_STRING_t	*supportedTxBandCombListPerBC_Sidelink_r16;	/* OPTIONAL */
	BIT_STRING_t	*supportedRxBandCombListPerBC_Sidelink_r16;	/* OPTIONAL */
	struct BandCombination_v1630__scalingFactorTxSidelink_r16 {
		A_SEQUENCE_OF(ScalingFactorSidelink_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *scalingFactorTxSidelink_r16;
	struct BandCombination_v1630__scalingFactorRxSidelink_r16 {
		A_SEQUENCE_OF(ScalingFactorSidelink_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *scalingFactorRxSidelink_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombination_v1630_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombination_v1630;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v1630_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombination_v1630_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CA-ParametersNR-v1630.h"
#include "CA-ParametersNRDC-v1630.h"
#include "MRDC-Parameters-v1630.h"

#endif	/* _BandCombination_v1630_H_ */
#include <asn_internal.h>
