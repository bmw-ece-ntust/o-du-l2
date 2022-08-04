/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_CellAccessRelatedInfo_EUTRA_5GC_H_
#define	_CellAccessRelatedInfo_EUTRA_5GC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-IdentityList-EUTRA-5GC.h"
#include "TrackingAreaCode.h"
#include "RAN-AreaCode.h"
#include "CellIdentity-EUTRA-5GC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellAccessRelatedInfo-EUTRA-5GC */
typedef struct CellAccessRelatedInfo_EUTRA_5GC {
	PLMN_IdentityList_EUTRA_5GC_t	 plmn_IdentityList_eutra_5gc;
	TrackingAreaCode_t	 trackingAreaCode_eutra_5gc;
	RAN_AreaCode_t	*ranac_5gc;	/* OPTIONAL */
	CellIdentity_EUTRA_5GC_t	 cellIdentity_eutra_5gc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellAccessRelatedInfo_EUTRA_5GC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellAccessRelatedInfo_EUTRA_5GC;
extern asn_SEQUENCE_specifics_t asn_SPC_CellAccessRelatedInfo_EUTRA_5GC_specs_1;
extern asn_TYPE_member_t asn_MBR_CellAccessRelatedInfo_EUTRA_5GC_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CellAccessRelatedInfo_EUTRA_5GC_H_ */
#include <asn_internal.h>
