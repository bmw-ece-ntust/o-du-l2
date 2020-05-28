/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RRCReestablishmentComplete_IEs_H_
#define	_RRCReestablishmentComplete_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCReestablishmentComplete-IEs */
typedef struct RRCReestablishmentComplete_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCReestablishmentComplete_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReestablishmentComplete_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReestablishmentComplete_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReestablishmentComplete_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReestablishmentComplete_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCReestablishmentComplete_IEs_H_ */
#include <asn_internal.h>
