/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_VarSuccessHO_Report_r17_IEs_H_
#define	_VarSuccessHO_Report_r17_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SuccessHO-Report-r17.h"
#include "PLMN-IdentityList2-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarSuccessHO-Report-r17-IEs */
typedef struct VarSuccessHO_Report_r17_IEs {
	SuccessHO_Report_r17_t	 successHO_Report_r17;
	PLMN_IdentityList2_r16_t	 plmn_IdentityList_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarSuccessHO_Report_r17_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarSuccessHO_Report_r17_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _VarSuccessHO_Report_r17_IEs_H_ */
#include <asn_internal.h>
