/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_VarRA_Report_r16_H_
#define	_VarRA_Report_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RA-ReportList-r16.h"
#include "PLMN-IdentityList-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarRA-Report-r16 */
typedef struct VarRA_Report_r16 {
	RA_ReportList_r16_t	 ra_ReportList_r16;
	PLMN_IdentityList_r16_t	 plmn_IdentityList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarRA_Report_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarRA_Report_r16;

#ifdef __cplusplus
}
#endif

#endif	/* _VarRA_Report_r16_H_ */
#include <asn_internal.h>
