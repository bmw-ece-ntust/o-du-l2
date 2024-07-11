/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CellsToAddModExt_v1710_H_
#define	_CellsToAddModExt_v1710_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellsToAddModExt_v1710__ntn_PolarizationDL_r17 {
	CellsToAddModExt_v1710__ntn_PolarizationDL_r17_rhcp	= 0,
	CellsToAddModExt_v1710__ntn_PolarizationDL_r17_lhcp	= 1,
	CellsToAddModExt_v1710__ntn_PolarizationDL_r17_linear	= 2
} e_CellsToAddModExt_v1710__ntn_PolarizationDL_r17;
typedef enum CellsToAddModExt_v1710__ntn_PolarizationUL_r17 {
	CellsToAddModExt_v1710__ntn_PolarizationUL_r17_rhcp	= 0,
	CellsToAddModExt_v1710__ntn_PolarizationUL_r17_lhcp	= 1,
	CellsToAddModExt_v1710__ntn_PolarizationUL_r17_linear	= 2
} e_CellsToAddModExt_v1710__ntn_PolarizationUL_r17;

/* CellsToAddModExt-v1710 */
typedef struct CellsToAddModExt_v1710 {
	long	*ntn_PolarizationDL_r17;	/* OPTIONAL */
	long	*ntn_PolarizationUL_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddModExt_v1710_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_PolarizationDL_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_PolarizationUL_r17_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddModExt_v1710;
extern asn_SEQUENCE_specifics_t asn_SPC_CellsToAddModExt_v1710_specs_1;
extern asn_TYPE_member_t asn_MBR_CellsToAddModExt_v1710_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CellsToAddModExt_v1710_H_ */
#include <asn_internal.h>
