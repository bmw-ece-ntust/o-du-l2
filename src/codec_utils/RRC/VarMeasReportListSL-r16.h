/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_VarMeasReportListSL_r16_H_
#define	_VarMeasReportListSL_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VarMeasReportSL_r16;

/* VarMeasReportListSL-r16 */
typedef struct VarMeasReportListSL_r16 {
	A_SEQUENCE_OF(struct VarMeasReportSL_r16) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasReportListSL_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasReportListSL_r16;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VarMeasReportSL-r16.h"

#endif	/* _VarMeasReportListSL_r16_H_ */
#include <asn_internal.h>
