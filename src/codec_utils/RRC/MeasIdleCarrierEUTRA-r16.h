/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MeasIdleCarrierEUTRA_r16_H_
#define	_MeasIdleCarrierEUTRA_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "EUTRA-AllowedMeasBandwidth.h"
#include <NativeEnumerated.h>
#include "RSRP-RangeEUTRA.h"
#include "RSRQ-RangeEUTRA-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16 {
	MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16_rsrp	= 0,
	MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16_rsrq	= 1,
	MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16_both	= 2
} e_MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16;

/* Forward declarations */
struct CellListEUTRA_r16;

/* MeasIdleCarrierEUTRA-r16 */
typedef struct MeasIdleCarrierEUTRA_r16 {
	ARFCN_ValueEUTRA_t	 carrierFreqEUTRA_r16;
	EUTRA_AllowedMeasBandwidth_t	 allowedMeasBandwidth_r16;
	struct CellListEUTRA_r16	*measCellListEUTRA_r16;	/* OPTIONAL */
	long	 reportQuantitiesEUTRA_r16;
	struct MeasIdleCarrierEUTRA_r16__qualityThresholdEUTRA_r16 {
		RSRP_RangeEUTRA_t	*idleRSRP_Threshold_EUTRA_r16;	/* OPTIONAL */
		RSRQ_RangeEUTRA_r16_t	*idleRSRQ_Threshold_EUTRA_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *qualityThresholdEUTRA_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdleCarrierEUTRA_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantitiesEUTRA_r16_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdleCarrierEUTRA_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasIdleCarrierEUTRA_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdleCarrierEUTRA_r16_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellListEUTRA-r16.h"

#endif	/* _MeasIdleCarrierEUTRA_r16_H_ */
#include <asn_internal.h>
