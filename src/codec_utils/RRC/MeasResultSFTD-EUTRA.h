/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MeasResultSFTD_EUTRA_H_
#define	_MeasResultSFTD_EUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-PhysCellId.h"
#include <NativeInteger.h>
#include "RSRP-Range.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultSFTD-EUTRA */
typedef struct MeasResultSFTD_EUTRA {
	EUTRA_PhysCellId_t	 eutra_PhysCellId;
	long	 sfn_OffsetResult;
	long	 frameBoundaryOffsetResult;
	RSRP_Range_t	*rsrp_Result;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultSFTD_EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultSFTD_EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultSFTD_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultSFTD_EUTRA_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultSFTD_EUTRA_H_ */
#include <asn_internal.h>
