/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_ConnEstFailReport_r16_H_
#define	_ConnEstFailReport_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasResultFailedCell-r16.h"
#include <NativeInteger.h>
#include "PerRAInfoList-r16.h"
#include "TimeSinceFailure-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LocationInfo_r16;
struct MeasResultList2NR_r16;
struct MeasResultList2EUTRA_r16;

/* ConnEstFailReport-r16 */
typedef struct ConnEstFailReport_r16 {
	MeasResultFailedCell_r16_t	 measResultFailedCell_r16;
	struct LocationInfo_r16	*locationInfo_r16;	/* OPTIONAL */
	struct ConnEstFailReport_r16__measResultNeighCells_r16 {
		struct MeasResultList2NR_r16	*measResultNeighCellListNR;	/* OPTIONAL */
		struct MeasResultList2EUTRA_r16	*measResultNeighCellListEUTRA;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultNeighCells_r16;
	long	 numberOfConnFail_r16;
	PerRAInfoList_r16_t	 perRAInfoList_r16;
	TimeSinceFailure_r16_t	 timeSinceFailure_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConnEstFailReport_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnEstFailReport_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_ConnEstFailReport_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_ConnEstFailReport_r16_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LocationInfo-r16.h"
#include "MeasResultList2NR-r16.h"
#include "MeasResultList2EUTRA-r16.h"

#endif	/* _ConnEstFailReport_r16_H_ */
#include <asn_internal.h>
