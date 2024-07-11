/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_MeasIdInfo_r16_H_
#define	_SL_MeasIdInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-MeasId-r16.h"
#include "SL-MeasObjectId-r16.h"
#include "SL-ReportConfigId-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-MeasIdInfo-r16 */
typedef struct SL_MeasIdInfo_r16 {
	SL_MeasId_r16_t	 sl_MeasId_r16;
	SL_MeasObjectId_r16_t	 sl_MeasObjectId_r16;
	SL_ReportConfigId_r16_t	 sl_ReportConfigId_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_MeasIdInfo_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_MeasIdInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_MeasIdInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_MeasIdInfo_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_MeasIdInfo_r16_H_ */
#include <asn_internal.h>
