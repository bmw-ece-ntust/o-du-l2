/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MeasResultCBR_NR_r16_H_
#define	_MeasResultCBR_NR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-ResourcePoolID-r16.h"
#include "SL-CBR-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultCBR-NR-r16 */
typedef struct MeasResultCBR_NR_r16 {
	SL_ResourcePoolID_r16_t	 sl_poolReportIdentity_r16;
	SL_CBR_r16_t	 sl_CBR_ResultsNR_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultCBR_NR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultCBR_NR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultCBR_NR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultCBR_NR_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultCBR_NR_r16_H_ */
#include <asn_internal.h>
