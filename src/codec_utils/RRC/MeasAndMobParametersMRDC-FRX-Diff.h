/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_MeasAndMobParametersMRDC_FRX_Diff_H_
#define	_MeasAndMobParametersMRDC_FRX_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasAndMobParametersMRDC_FRX_Diff__simultaneousRxDataSSB_DiffNumerology {
	MeasAndMobParametersMRDC_FRX_Diff__simultaneousRxDataSSB_DiffNumerology_supported	= 0
} e_MeasAndMobParametersMRDC_FRX_Diff__simultaneousRxDataSSB_DiffNumerology;

/* MeasAndMobParametersMRDC-FRX-Diff */
typedef struct MeasAndMobParametersMRDC_FRX_Diff {
	long	*simultaneousRxDataSSB_DiffNumerology;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasAndMobParametersMRDC_FRX_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousRxDataSSB_DiffNumerology_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasAndMobParametersMRDC_FRX_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasAndMobParametersMRDC_FRX_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasAndMobParametersMRDC_FRX_Diff_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasAndMobParametersMRDC_FRX_Diff_H_ */
#include <asn_internal.h>
