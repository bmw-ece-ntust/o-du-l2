/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ResourceCoordinationTransferInformation_H_
#define	_ResourceCoordinationTransferInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-Cell-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ResourceCoordinationEUTRACellInfo;
struct ProtocolExtensionContainer;

/* ResourceCoordinationTransferInformation */
typedef struct ResourceCoordinationTransferInformation {
	EUTRA_Cell_ID_t	 meNB_Cell_ID;
	struct ResourceCoordinationEUTRACellInfo	*resourceCoordinationEUTRACellInfo;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResourceCoordinationTransferInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResourceCoordinationTransferInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _ResourceCoordinationTransferInformation_H_ */
#include <asn_internal.h>