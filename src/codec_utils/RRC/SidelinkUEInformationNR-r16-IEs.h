/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SidelinkUEInformationNR_r16_IEs_H_
#define	_SidelinkUEInformationNR_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_InterestedFreqList_r16;
struct SL_TxResourceReqList_r16;
struct SL_FailureList_r16;
struct SidelinkUEInformationNR_v1700_IEs;

/* SidelinkUEInformationNR-r16-IEs */
typedef struct SidelinkUEInformationNR_r16_IEs {
	struct SL_InterestedFreqList_r16	*sl_RxInterestedFreqList_r16;	/* OPTIONAL */
	struct SL_TxResourceReqList_r16	*sl_TxResourceReqList_r16;	/* OPTIONAL */
	struct SL_FailureList_r16	*sl_FailureList_r16;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SidelinkUEInformationNR_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SidelinkUEInformationNR_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SidelinkUEInformationNR_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SidelinkUEInformationNR_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SidelinkUEInformationNR_r16_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-InterestedFreqList-r16.h"
#include "SL-TxResourceReqList-r16.h"
#include "SL-FailureList-r16.h"
#include "SidelinkUEInformationNR-v1700-IEs.h"

#endif	/* _SidelinkUEInformationNR_r16_IEs_H_ */
#include <asn_internal.h>
