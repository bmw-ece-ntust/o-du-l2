/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_MeasurementInfoItem_v300_H_
#define	_MeasurementInfoItem_v300_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementType.h"
#include "LabelInfoList-v300.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasurementInfoItem-v300 */
typedef struct MeasurementInfoItem_v300 {
	MeasurementType_t	 measType;
	LabelInfoList_v300_t	 labelInfoList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementInfoItem_v300_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementInfoItem_v300;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementInfoItem_v300_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementInfoItem_v300_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementInfoItem_v300_H_ */
#include <asn_internal.h>
