/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_PDCCH_RepetitionParameters_r17_H_
#define	_PDCCH_RepetitionParameters_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCCH_RepetitionParameters_r17__supportedMode_r17 {
	PDCCH_RepetitionParameters_r17__supportedMode_r17_intra_span	= 0,
	PDCCH_RepetitionParameters_r17__supportedMode_r17_inter_span	= 1,
	PDCCH_RepetitionParameters_r17__supportedMode_r17_both	= 2
} e_PDCCH_RepetitionParameters_r17__supportedMode_r17;
typedef enum PDCCH_RepetitionParameters_r17__limitX_PerCC_r17 {
	PDCCH_RepetitionParameters_r17__limitX_PerCC_r17_n4	= 0,
	PDCCH_RepetitionParameters_r17__limitX_PerCC_r17_n8	= 1,
	PDCCH_RepetitionParameters_r17__limitX_PerCC_r17_n16	= 2,
	PDCCH_RepetitionParameters_r17__limitX_PerCC_r17_n32	= 3,
	PDCCH_RepetitionParameters_r17__limitX_PerCC_r17_n44	= 4,
	PDCCH_RepetitionParameters_r17__limitX_PerCC_r17_n64	= 5,
	PDCCH_RepetitionParameters_r17__limitX_PerCC_r17_nolimit	= 6
} e_PDCCH_RepetitionParameters_r17__limitX_PerCC_r17;
typedef enum PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17 {
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n4	= 0,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n8	= 1,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n16	= 2,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n32	= 3,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n44	= 4,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n64	= 5,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n128	= 6,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n256	= 7,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_n512	= 8,
	PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17_nolimit	= 9
} e_PDCCH_RepetitionParameters_r17__limitX_AcrossCC_r17;

/* PDCCH-RepetitionParameters-r17 */
typedef struct PDCCH_RepetitionParameters_r17 {
	long	 supportedMode_r17;
	long	*limitX_PerCC_r17;	/* OPTIONAL */
	long	*limitX_AcrossCC_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCCH_RepetitionParameters_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedMode_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_limitX_PerCC_r17_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_limitX_AcrossCC_r17_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCCH_RepetitionParameters_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCCH_RepetitionParameters_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCCH_RepetitionParameters_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCCH_RepetitionParameters_r17_H_ */
#include <asn_internal.h>
