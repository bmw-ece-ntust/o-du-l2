/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MeasResultsPerCellIdleNR_r16_H_
#define	_MeasResultsPerCellIdleNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ResultsPerSSB_IndexList_r16;

/* MeasResultsPerCellIdleNR-r16 */
typedef struct MeasResultsPerCellIdleNR_r16 {
	PhysCellId_t	 physCellId_r16;
	struct MeasResultsPerCellIdleNR_r16__measIdleResultNR_r16 {
		RSRP_Range_t	*rsrp_Result_r16;	/* OPTIONAL */
		RSRQ_Range_t	*rsrq_Result_r16;	/* OPTIONAL */
		struct ResultsPerSSB_IndexList_r16	*resultsSSB_Indexes_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measIdleResultNR_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultsPerCellIdleNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultsPerCellIdleNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultsPerCellIdleNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultsPerCellIdleNR_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ResultsPerSSB-IndexList-r16.h"

#endif	/* _MeasResultsPerCellIdleNR_r16_H_ */
#include <asn_internal.h>
