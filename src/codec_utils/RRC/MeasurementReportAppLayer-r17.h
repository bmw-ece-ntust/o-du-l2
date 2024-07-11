/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MeasurementReportAppLayer_r17_H_
#define	_MeasurementReportAppLayer_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementReportAppLayer_r17__criticalExtensions_PR {
	MeasurementReportAppLayer_r17__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementReportAppLayer_r17__criticalExtensions_PR_measurementReportAppLayer_r17,
	MeasurementReportAppLayer_r17__criticalExtensions_PR_criticalExtensionsFuture
} MeasurementReportAppLayer_r17__criticalExtensions_PR;

/* Forward declarations */
struct MeasurementReportAppLayer_r17_IEs;

/* MeasurementReportAppLayer-r17 */
typedef struct MeasurementReportAppLayer_r17 {
	struct MeasurementReportAppLayer_r17__criticalExtensions {
		MeasurementReportAppLayer_r17__criticalExtensions_PR present;
		union MeasurementReportAppLayer_r17__criticalExtensions_u {
			struct MeasurementReportAppLayer_r17_IEs	*measurementReportAppLayer_r17;
			struct MeasurementReportAppLayer_r17__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementReportAppLayer_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementReportAppLayer_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementReportAppLayer_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementReportAppLayer_r17_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementReportAppLayer-r17-IEs.h"

#endif	/* _MeasurementReportAppLayer_r17_H_ */
#include <asn_internal.h>
