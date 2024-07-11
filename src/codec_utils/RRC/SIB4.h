/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SIB4_H_
#define	_SIB4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCarrierFreqList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqList_v1610;
struct InterFreqCarrierFreqList_v1700;
struct InterFreqCarrierFreqList_v1720;
struct InterFreqCarrierFreqList_v1730;

/* SIB4 */
typedef struct SIB4 {
	InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SIB4__ext1 {
		struct InterFreqCarrierFreqList_v1610	*interFreqCarrierFreqList_v1610;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SIB4__ext2 {
		struct InterFreqCarrierFreqList_v1700	*interFreqCarrierFreqList_v1700;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct SIB4__ext3 {
		struct InterFreqCarrierFreqList_v1720	*interFreqCarrierFreqList_v1720;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct SIB4__ext4 {
		struct InterFreqCarrierFreqList_v1730	*interFreqCarrierFreqList_v1730;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB4;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB4_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB4_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqList-v1610.h"
#include "InterFreqCarrierFreqList-v1700.h"
#include "InterFreqCarrierFreqList-v1720.h"
#include "InterFreqCarrierFreqList-v1730.h"

#endif	/* _SIB4_H_ */
#include <asn_internal.h>
