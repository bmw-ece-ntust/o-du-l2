/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RRCResume_IEs_H_
#define	_RRCResume_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCResume_IEs__fullConfig {
	RRCResume_IEs__fullConfig_true	= 0
} e_RRCResume_IEs__fullConfig;

/* Forward declarations */
struct RadioBearerConfig;
struct MeasConfig;
struct RRCResume_v1560_IEs;

/* RRCResume-IEs */
typedef struct RRCResume_IEs {
	struct RadioBearerConfig	*radioBearerConfig;	/* OPTIONAL */
	OCTET_STRING_t	*masterCellGroup;	/* OPTIONAL */
	struct MeasConfig	*measConfig;	/* OPTIONAL */
	long	*fullConfig;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCResume_v1560_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCResume_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fullConfig_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCResume_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCResume_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCResume_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioBearerConfig.h"
#include "MeasConfig.h"
#include "RRCResume-v1560-IEs.h"

#endif	/* _RRCResume_IEs_H_ */
#include <asn_internal.h>
